#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentActionProgress.hpp"
namespace lol {
  struct PatcherComponentState { 
    PatcherComponentStateAction action;
    std::string id;
    bool isUpdateAvailable;
    bool isCorrupted;
    bool isUpToDate;
    std::optional<PatcherComponentActionProgress> progress;
    std::optional<std::string> timeOfLastUpToDateCheckISO8601; 
  };
  inline void to_json(json& j, const PatcherComponentState& v) {
    j["action"] = v.action; 
    j["id"] = v.id; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["isCorrupted"] = v.isCorrupted; 
    j["isUpToDate"] = v.isUpToDate; 
    if(v.progress)
      j["progress"] = *v.progress;
    if(v.timeOfLastUpToDateCheckISO8601)
      j["timeOfLastUpToDateCheckISO8601"] = *v.timeOfLastUpToDateCheckISO8601;
  }
  inline void from_json(const json& j, PatcherComponentState& v) {
    v.action = j.at("action").get<PatcherComponentStateAction>(); 
    v.id = j.at("id").get<std::string>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    if(auto it = j.find("progress"); it != j.end() && !it->is_null())
      v.progress = it->get<std::optional<PatcherComponentActionProgress>>(); 
    if(auto it = j.find("timeOfLastUpToDateCheckISO8601"); it != j.end() && !it->is_null())
      v.timeOfLastUpToDateCheckISO8601 = it->get<std::optional<std::string>>(); 
  }
}