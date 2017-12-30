#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentState.hpp"
#include "PatcherComponentStateAction.hpp"
namespace lol {
  struct PatcherProductState { 
    PatcherComponentStateAction action;
    std::string id;
    bool isStopped;
    bool isUpdateAvailable;
    bool isCorrupted;
    bool isUpToDate;
    double percentPatched;
    std::vector<PatcherComponentState> components; 
  };
  inline void to_json(json& j, const PatcherProductState& v) {
    j["action"] = v.action; 
    j["id"] = v.id; 
    j["isStopped"] = v.isStopped; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["isCorrupted"] = v.isCorrupted; 
    j["isUpToDate"] = v.isUpToDate; 
    j["percentPatched"] = v.percentPatched; 
    j["components"] = v.components; 
  }
  inline void from_json(const json& j, PatcherProductState& v) {
    v.action = j.at("action").get<PatcherComponentStateAction>(); 
    v.id = j.at("id").get<std::string>(); 
    v.isStopped = j.at("isStopped").get<bool>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.percentPatched = j.at("percentPatched").get<double>(); 
    v.components = j.at("components").get<std::vector<PatcherComponentState>>(); 
  }
}