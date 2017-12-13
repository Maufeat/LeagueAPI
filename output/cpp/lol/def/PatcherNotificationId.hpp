#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct PatcherNotificationId {  
    ConnectionError_e = 1,
    DidRestoreClientBackup_e = 5,
    FailedToWriteError_e = 3,
    MissingFilesError_e = 2,
    UnspecifiedError_e = 0,
    WillRestoreClientBackupOnRestart_e = 4,
  };
  void to_json(json& j, const PatcherNotificationId& v) {
    if(v == PatcherNotificationId::ConnectionError_e) {
      j = "ConnectionError";
      return;
    }
    if(v == PatcherNotificationId::DidRestoreClientBackup_e) {
      j = "DidRestoreClientBackup";
      return;
    }
    if(v == PatcherNotificationId::FailedToWriteError_e) {
      j = "FailedToWriteError";
      return;
    }
    if(v == PatcherNotificationId::MissingFilesError_e) {
      j = "MissingFilesError";
      return;
    }
    if(v == PatcherNotificationId::UnspecifiedError_e) {
      j = "UnspecifiedError";
      return;
    }
    if(v == PatcherNotificationId::WillRestoreClientBackupOnRestart_e) {
      j = "WillRestoreClientBackupOnRestart";
      return;
    }
  }
  void from_json(const json& j, PatcherNotificationId& v) {
    if(j.get<std::string>() == "ConnectionError") {
      v = PatcherNotificationId::ConnectionError_e;
      return;
    } 
    if(j.get<std::string>() == "DidRestoreClientBackup") {
      v = PatcherNotificationId::DidRestoreClientBackup_e;
      return;
    } 
    if(j.get<std::string>() == "FailedToWriteError") {
      v = PatcherNotificationId::FailedToWriteError_e;
      return;
    } 
    if(j.get<std::string>() == "MissingFilesError") {
      v = PatcherNotificationId::MissingFilesError_e;
      return;
    } 
    if(j.get<std::string>() == "UnspecifiedError") {
      v = PatcherNotificationId::UnspecifiedError_e;
      return;
    } 
    if(j.get<std::string>() == "WillRestoreClientBackupOnRestart") {
      v = PatcherNotificationId::WillRestoreClientBackupOnRestart_e;
      return;
    } 
  }
}