#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentActionProgress.hpp"
namespace lol {
  struct PatcherComponentState { 
    std::string id;
    PatcherComponentStateAction action;
    bool isUpToDate;
    bool isUpdateAvailable;
    std::optional<std::string> timeOfLastUpToDateCheckISO8601;
    bool isCorrupted;
    std::optional<PatcherComponentActionProgress> progress; 
  };
  inline void to_json(json& j, const PatcherComponentState& v) {
    j["id"] = v.id; 
    j["action"] = v.action; 
    j["isUpToDate"] = v.isUpToDate; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    if(v.timeOfLastUpToDateCheckISO8601)
      j["timeOfLastUpToDateCheckISO8601"] = *v.timeOfLastUpToDateCheckISO8601;
    j["isCorrupted"] = v.isCorrupted; 
    if(v.progress)
      j["progress"] = *v.progress;
  }
  inline void from_json(const json& j, PatcherComponentState& v) {
    v.id = j.at("id").get<std::string>(); 
    v.action = j.at("action").get<PatcherComponentStateAction>(); 
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    if(auto it = j.find("timeOfLastUpToDateCheckISO8601"); it != j.end() && !it->is_null())
      v.timeOfLastUpToDateCheckISO8601 = it->get<std::optional<std::string>>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
    if(auto it = j.find("progress"); it != j.end() && !it->is_null())
      v.progress = it->get<std::optional<PatcherComponentActionProgress>>(); 
  }
}