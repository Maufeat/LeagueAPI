#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentState.hpp"
namespace lol {
  struct PatcherProductState { 
    std::string id;
    PatcherComponentStateAction action;
    bool isUpToDate;
    bool isUpdateAvailable;
    bool isCorrupted;
    bool isStopped;
    double percentPatched;
    std::vector<PatcherComponentState> components; 
  };
  inline void to_json(json& j, const PatcherProductState& v) {
    j["id"] = v.id; 
    j["action"] = v.action; 
    j["isUpToDate"] = v.isUpToDate; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["isCorrupted"] = v.isCorrupted; 
    j["isStopped"] = v.isStopped; 
    j["percentPatched"] = v.percentPatched; 
    j["components"] = v.components; 
  }
  inline void from_json(const json& j, PatcherProductState& v) {
    v.id = j.at("id").get<std::string>(); 
    v.action = j.at("action").get<PatcherComponentStateAction>(); 
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
    v.isStopped = j.at("isStopped").get<bool>(); 
    v.percentPatched = j.at("percentPatched").get<double>(); 
    v.components = j.at("components").get<std::vector<PatcherComponentState>>(); 
  }
}