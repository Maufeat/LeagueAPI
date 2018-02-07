#pragma once
#include "../base_def.hpp" 
#include "LolGameflowPatcherProductStateAction.hpp"
namespace lol {
  struct LolGameflowPatcherProductState { 
    bool isCorrupted;
    bool isStopped;
    bool isUpToDate;
    bool isUpdateAvailable;
    LolGameflowPatcherProductStateAction action; 
  };
  inline void to_json(json& j, const LolGameflowPatcherProductState& v) {
    j["isCorrupted"] = v.isCorrupted; 
    j["isStopped"] = v.isStopped; 
    j["isUpToDate"] = v.isUpToDate; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["action"] = v.action; 
  }
  inline void from_json(const json& j, LolGameflowPatcherProductState& v) {
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
    v.isStopped = j.at("isStopped").get<bool>(); 
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction>(); 
  }
}