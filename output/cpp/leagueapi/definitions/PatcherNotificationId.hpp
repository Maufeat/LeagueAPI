#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PatcherNotificationId { /**/ 
    ConnectionError_e = 1, /**/ 
    DidRestoreClientBackup_e = 5, /**/ 
    FailedToWriteError_e = 3, /**/ 
    MissingFilesError_e = 2, /**/ 
    UnspecifiedError_e = 0, /**/ 
    WillRestoreClientBackupOnRestart_e = 4, /**/ 
  };
  static void to_json(json& j, const PatcherNotificationId& v) {
    switch(v) { 
    case PatcherNotificationId::ConnectionError_e:
      j = "ConnectionError";
    break;
    case PatcherNotificationId::DidRestoreClientBackup_e:
      j = "DidRestoreClientBackup";
    break;
    case PatcherNotificationId::FailedToWriteError_e:
      j = "FailedToWriteError";
    break;
    case PatcherNotificationId::MissingFilesError_e:
      j = "MissingFilesError";
    break;
    case PatcherNotificationId::UnspecifiedError_e:
      j = "UnspecifiedError";
    break;
    case PatcherNotificationId::WillRestoreClientBackupOnRestart_e:
      j = "WillRestoreClientBackupOnRestart";
    break;
    };
  }
  static void from_json(const json& j, PatcherNotificationId& v) {
    auto s = j.get<std::string>(); 
    if(s == "ConnectionError") {
      v = PatcherNotificationId::ConnectionError_e;
      return;
    } 
    if(s == "DidRestoreClientBackup") {
      v = PatcherNotificationId::DidRestoreClientBackup_e;
      return;
    } 
    if(s == "FailedToWriteError") {
      v = PatcherNotificationId::FailedToWriteError_e;
      return;
    } 
    if(s == "MissingFilesError") {
      v = PatcherNotificationId::MissingFilesError_e;
      return;
    } 
    if(s == "UnspecifiedError") {
      v = PatcherNotificationId::UnspecifiedError_e;
      return;
    } 
    if(s == "WillRestoreClientBackupOnRestart") {
      v = PatcherNotificationId::WillRestoreClientBackupOnRestart_e;
      return;
    } 
  }
} 