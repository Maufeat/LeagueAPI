#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentActionProgress.hpp"
#include "PatcherComponentStateAction.hpp"
namespace lol {
  struct PatcherComponentState { 
    bool isUpToDate;
    std::optional<PatcherComponentActionProgress> progress;
    PatcherComponentStateAction action;
    std::string id;
    std::optional<std::string> timeOfLastUpToDateCheckISO8601;
    bool isUpdateAvailable;
    bool isCorrupted; 
  };
  inline void to_json(json& j, const PatcherComponentState& v) {
    j["isUpToDate"] = v.isUpToDate; 
    if(v.progress)
      j["progress"] = *v.progress;
    j["action"] = v.action; 
    j["id"] = v.id; 
    if(v.timeOfLastUpToDateCheckISO8601)
      j["timeOfLastUpToDateCheckISO8601"] = *v.timeOfLastUpToDateCheckISO8601;
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["isCorrupted"] = v.isCorrupted; 
  }
  inline void from_json(const json& j, PatcherComponentState& v) {
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    if(auto it = j.find("progress"); it != j.end() && !it->is_null())
      v.progress = it->get<std::optional<PatcherComponentActionProgress>>(); 
    v.action = j.at("action").get<PatcherComponentStateAction>(); 
    v.id = j.at("id").get<std::string>(); 
    if(auto it = j.find("timeOfLastUpToDateCheckISO8601"); it != j.end() && !it->is_null())
      v.timeOfLastUpToDateCheckISO8601 = it->get<std::optional<std::string>>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
  }
}