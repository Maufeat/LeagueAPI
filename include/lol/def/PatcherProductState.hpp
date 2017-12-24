#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentState.hpp"
#include "PatcherComponentStateAction.hpp"
namespace lol {
  struct PatcherProductState { 
    bool isUpToDate;
    double percentPatched;
    PatcherComponentStateAction action;
    std::string id;
    std::vector<PatcherComponentState> components;
    bool isUpdateAvailable;
    bool isStopped;
    bool isCorrupted; 
  };
  inline void to_json(json& j, const PatcherProductState& v) {
    j["isUpToDate"] = v.isUpToDate; 
    j["percentPatched"] = v.percentPatched; 
    j["action"] = v.action; 
    j["id"] = v.id; 
    j["components"] = v.components; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["isStopped"] = v.isStopped; 
    j["isCorrupted"] = v.isCorrupted; 
  }
  inline void from_json(const json& j, PatcherProductState& v) {
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.percentPatched = j.at("percentPatched").get<double>(); 
    v.action = j.at("action").get<PatcherComponentStateAction>(); 
    v.id = j.at("id").get<std::string>(); 
    v.components = j.at("components").get<std::vector<PatcherComponentState>>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.isStopped = j.at("isStopped").get<bool>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
  }
}