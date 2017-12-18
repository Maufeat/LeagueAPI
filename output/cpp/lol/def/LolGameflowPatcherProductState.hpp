#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowPatcherProductStateAction.hpp>
namespace lol {
  struct LolGameflowPatcherProductState { 
    bool isUpToDate;
    bool isStopped;
    bool isCorrupted;
    bool isUpdateAvailable;
    LolGameflowPatcherProductStateAction action; 
  };
  inline void to_json(json& j, const LolGameflowPatcherProductState& v) {
    j["isUpToDate"] = v.isUpToDate; 
    j["isStopped"] = v.isStopped; 
    j["isCorrupted"] = v.isCorrupted; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["action"] = v.action; 
  }
  inline void from_json(const json& j, LolGameflowPatcherProductState& v) {
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.isStopped = j.at("isStopped").get<bool>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction>(); 
  }
}