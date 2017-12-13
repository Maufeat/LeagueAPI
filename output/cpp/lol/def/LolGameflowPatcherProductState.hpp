#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowPatcherProductStateAction.hpp>
namespace lol {
  struct LolGameflowPatcherProductState { 
    bool isCorrupted;
    LolGameflowPatcherProductStateAction action;
    bool isUpdateAvailable;
    bool isUpToDate;
    bool isStopped; 
  };
  void to_json(json& j, const LolGameflowPatcherProductState& v) {
  j["isCorrupted"] = v.isCorrupted; 
  j["action"] = v.action; 
  j["isUpdateAvailable"] = v.isUpdateAvailable; 
  j["isUpToDate"] = v.isUpToDate; 
  j["isStopped"] = v.isStopped; 
  }
  void from_json(const json& j, LolGameflowPatcherProductState& v) {
  v.isCorrupted = j.at("isCorrupted").get<bool>(); 
  v.action = j.at("action").get<LolGameflowPatcherProductStateAction>(); 
  v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
  v.isUpToDate = j.at("isUpToDate").get<bool>(); 
  v.isStopped = j.at("isStopped").get<bool>(); 
  }
}