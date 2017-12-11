#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PatcherInjectedPatcherError { /**/ 
    FailedFailedToWriteFile_e = 3, /**/ 
    FailedToFindFile_e = 1, /**/ 
    FailedToResolveHostName_e = 2, /**/ 
    UnspecifiedError_e = 0, /**/ 
  };
  static void to_json(json& j, const PatcherInjectedPatcherError& v) {
    switch(v) { 
    case PatcherInjectedPatcherError::FailedFailedToWriteFile_e:
      j = "FailedFailedToWriteFile";
    break;
    case PatcherInjectedPatcherError::FailedToFindFile_e:
      j = "FailedToFindFile";
    break;
    case PatcherInjectedPatcherError::FailedToResolveHostName_e:
      j = "FailedToResolveHostName";
    break;
    case PatcherInjectedPatcherError::UnspecifiedError_e:
      j = "UnspecifiedError";
    break;
    };
  }
  static void from_json(const json& j, PatcherInjectedPatcherError& v) {
    auto s = j.get<std::string>(); 
    if(s == "FailedFailedToWriteFile") {
      v = PatcherInjectedPatcherError::FailedFailedToWriteFile_e;
      return;
    } 
    if(s == "FailedToFindFile") {
      v = PatcherInjectedPatcherError::FailedToFindFile_e;
      return;
    } 
    if(s == "FailedToResolveHostName") {
      v = PatcherInjectedPatcherError::FailedToResolveHostName_e;
      return;
    } 
    if(s == "UnspecifiedError") {
      v = PatcherInjectedPatcherError::UnspecifiedError_e;
      return;
    } 
  }
} 