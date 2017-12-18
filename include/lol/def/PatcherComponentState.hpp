#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentActionProgress.hpp"
namespace lol {
  struct PatcherComponentState { 
    std::optional<PatcherComponentActionProgress> progress;
    bool isUpdateAvailable;
    bool isUpToDate;
    PatcherComponentStateAction action;
    bool isCorrupted;
    std::string id;
    std::optional<std::string> timeOfLastUpToDateCheckISO8601; 
  };
  inline void to_json(json& j, const PatcherComponentState& v) {
    if(v.progress)
      j["progress"] = *v.progress;
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["isUpToDate"] = v.isUpToDate; 
    j["action"] = v.action; 
    j["isCorrupted"] = v.isCorrupted; 
    j["id"] = v.id; 
    if(v.timeOfLastUpToDateCheckISO8601)
      j["timeOfLastUpToDateCheckISO8601"] = *v.timeOfLastUpToDateCheckISO8601;
  }
  inline void from_json(const json& j, PatcherComponentState& v) {
    if(auto it = j.find("progress"); it != j.end() && !it->is_null())
      v.progress = it->get<std::optional<PatcherComponentActionProgress>>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.action = j.at("action").get<PatcherComponentStateAction>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
    v.id = j.at("id").get<std::string>(); 
    if(auto it = j.find("timeOfLastUpToDateCheckISO8601"); it != j.end() && !it->is_null())
      v.timeOfLastUpToDateCheckISO8601 = it->get<std::optional<std::string>>(); 
  }
}