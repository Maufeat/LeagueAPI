#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PatcherComponentStateAction.hpp>
#include <lol/def/PatcherComponentActionProgress.hpp>
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
  void to_json(json& j, const PatcherComponentState& v) {
  j["progress"] = v.progress; 
  j["isUpdateAvailable"] = v.isUpdateAvailable; 
  j["isUpToDate"] = v.isUpToDate; 
  j["action"] = v.action; 
  j["isCorrupted"] = v.isCorrupted; 
  j["id"] = v.id; 
  j["timeOfLastUpToDateCheckISO8601"] = v.timeOfLastUpToDateCheckISO8601; 
  }
  void from_json(const json& j, PatcherComponentState& v) {
  v.progress = j.at("progress").get<std::optional<PatcherComponentActionProgress>>(); 
  v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
  v.isUpToDate = j.at("isUpToDate").get<bool>(); 
  v.action = j.at("action").get<PatcherComponentStateAction>(); 
  v.isCorrupted = j.at("isCorrupted").get<bool>(); 
  v.id = j.at("id").get<std::string>(); 
  v.timeOfLastUpToDateCheckISO8601 = j.at("timeOfLastUpToDateCheckISO8601").get<std::optional<std::string>>(); 
  }
}