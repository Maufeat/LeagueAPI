#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PatcherComponentStateAction.hpp>
#include <lol/def/PatcherComponentState.hpp>
namespace lol {
  struct PatcherProductState { 
    std::vector<PatcherComponentState> components;
    bool isStopped;
    bool isUpdateAvailable;
    double percentPatched;
    bool isUpToDate;
    PatcherComponentStateAction action;
    bool isCorrupted;
    std::string id; 
  };
  void to_json(json& j, const PatcherProductState& v) {
    j["components"] = v.components; 
    j["isStopped"] = v.isStopped; 
    j["isUpdateAvailable"] = v.isUpdateAvailable; 
    j["percentPatched"] = v.percentPatched; 
    j["isUpToDate"] = v.isUpToDate; 
    j["action"] = v.action; 
    j["isCorrupted"] = v.isCorrupted; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, PatcherProductState& v) {
    v.components = j.at("components").get<std::vector<PatcherComponentState>>(); 
    v.isStopped = j.at("isStopped").get<bool>(); 
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
    v.percentPatched = j.at("percentPatched").get<double>(); 
    v.isUpToDate = j.at("isUpToDate").get<bool>(); 
    v.action = j.at("action").get<PatcherComponentStateAction>(); 
    v.isCorrupted = j.at("isCorrupted").get<bool>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}