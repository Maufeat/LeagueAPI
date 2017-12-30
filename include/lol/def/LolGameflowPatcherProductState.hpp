#pragma once
#include "../base_def.hpp" 
#include "LolGameflowPatcherProductStateAction.hpp"
namespace lol {
  struct LolGameflowPatcherProductState { 
    bool isUpToDate;
    LolGameflowPatcherProductStateAction action;
    bool isStopped;
    bool isUpdateAvailable;
    bool isCorrupted; 
  };
  inline void to_json(json& j, const LolGameflowPatcherProductState& v) {
    j["isUpToDate"] = v.isUpToDate; 
    j["action"] = v.action; 
    j["isStopped"] = v.isStopped; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["isCorrupted"] = v.isCorrupted; 
  }
  inline void from_json(const json& j, LolGameflowPatcherProductState& v) {
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction>(); 
    v.isStopped = j.at("isStopped").get<bool>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
  }
}