#pragma once
#include "../base_def.hpp" 
#include "LolGameflowPatcherProductStateAction.hpp"
namespace lol {
  struct LolGameflowPatcherProductState { 
    bool isUpToDate;
    LolGameflowPatcherProductStateAction action;
    bool isCorrupted;
    bool isStopped;
    bool isUpdateAvailable; 
  };
  inline void to_json(json& j, const LolGameflowPatcherProductState& v) {
    j["isUpToDate"] = v.isUpToDate; 
    j["action"] = v.action; 
    j["isCorrupted"] = v.isCorrupted; 
    j["isStopped"] = v.isStopped; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
  }
  inline void from_json(const json& j, LolGameflowPatcherProductState& v) {
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
    v.isStopped = j.at("isStopped").get<bool>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
  }
}