#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct PatcherInjectedPatcherError {  
    FailedFailedToWriteFile_e = 3,
    FailedToFindFile_e = 1,
    FailedToResolveHostName_e = 2,
    UnspecifiedError_e = 0,
  };
  void to_json(json& j, const PatcherInjectedPatcherError& v) {
  if(v == PatcherInjectedPatcherError::FailedFailedToWriteFile_e) {
    j = "FailedFailedToWriteFile";
    return;
  }
  if(v == PatcherInjectedPatcherError::FailedToFindFile_e) {
    j = "FailedToFindFile";
    return;
  }
  if(v == PatcherInjectedPatcherError::FailedToResolveHostName_e) {
    j = "FailedToResolveHostName";
    return;
  }
  if(v == PatcherInjectedPatcherError::UnspecifiedError_e) {
    j = "UnspecifiedError";
    return;
  }
  }
  void from_json(const json& j, PatcherInjectedPatcherError& v) {
  if(j.get<std::string>() == "FailedFailedToWriteFile") {
    v = PatcherInjectedPatcherError::FailedFailedToWriteFile_e;
    return;
  } 
  if(j.get<std::string>() == "FailedToFindFile") {
    v = PatcherInjectedPatcherError::FailedToFindFile_e;
    return;
  } 
  if(j.get<std::string>() == "FailedToResolveHostName") {
    v = PatcherInjectedPatcherError::FailedToResolveHostName_e;
    return;
  } 
  if(j.get<std::string>() == "UnspecifiedError") {
    v = PatcherInjectedPatcherError::UnspecifiedError_e;
    return;
  } 
  }
}