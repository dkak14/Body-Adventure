using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using System.Threading;
using System.Runtime.Serialization.Formatters.Binary;
namespace GameSave {
    public static class SaveManager {
        static string GetApplicationDataPath {
            get { return Application.persistentDataPath; }
        }
        static string GetSaveFolderPath(string saveFolder) {
            return GetApplicationDataPath + '/' + saveFolder;
        }
        static string GetSaveFIlePath(string saveFolder, string fileName) {
            return GetSaveFolderPath(saveFolder) + '/' + fileName + ".dat";
        }

        static  public void SaveSerailizeData(string saveFolder, string fileName, SaveData saveData) {
            string folderPath = GetSaveFolderPath(saveFolder);
            string path = GetSaveFIlePath(saveFolder, fileName);

            if (!Directory.Exists(folderPath))
                Directory.CreateDirectory(folderPath);
            
            using (FileStream file = File.Create(path)) {
                Debug.Log("쩌장");
                new BinaryFormatter().Serialize(file, saveData.GetSerilizedData());
            }
        }
        public static SaveData LoadDeSerailizedData(string saveFolder, string fileName) {
            SaveData saveData = new SaveData();
            string path = GetSaveFIlePath(saveFolder, fileName);
            if (File.Exists(path)) {
                using (FileStream file = File.Open(path, FileMode.Open)) {
                    object saveDataObject = new BinaryFormatter().Deserialize(file);
                    saveData.LoadFromSerilizedData(saveDataObject);
                    Debug.Log("로드");
                    return saveData;
                }
            }
            return null;
        }
    }
}
