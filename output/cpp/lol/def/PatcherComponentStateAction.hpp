#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct PatcherComponentStateAction {  
    CheckingForUpdates_e = 1,
    Idle_e = 0,
    Patching_e = 2,
    Repairing_e = 3,
  };
  void to_json(json& j, const PatcherComponentStateAction& v) {
  if(v == PatcherComponentStateAction::CheckingForUpdates_e) {
    j = "CheckingForUpdates";
    return;
  }
  if(v == PatcherComponentStateAction::Idle_e) {
    j = "Idle";
    return;
  }
  if(v == PatcherComponentStateAction::Patching_e) {
    j = "Patching";
    return;
  }
  if(v == PatcherComponentStateAction::Repairing_e) {
    j = "Repairing";
    return;
  }
  }
  void from_json(const json& j, PatcherComponentStateAction& v) {
  if(j.get<std::string>() == "CheckingForUpdates") {
    v = PatcherComponentStateAction::CheckingForUpdates_e;
    return;
  } 
  if(j.get<std::string>() == "Idle") {
    v = PatcherComponentStateAction::Idle_e;
    return;
  } 
  if(j.get<std::string>() == "Patching") {
    v = PatcherComponentStateAction::Patching_e;
    return;
  } 
  if(j.get<std::string>() == "Repairing") {
    v = PatcherComponentStateAction::Repairing_e;
    return;
  } 
  }
}