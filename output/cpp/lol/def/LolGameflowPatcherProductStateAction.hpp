#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameflowPatcherProductStateAction {  
    CheckingForUpdates_e = 1,
    Idle_e = 0,
    Patching_e = 2,
    Repairing_e = 3,
  };
  inline void to_json(json& j, const LolGameflowPatcherProductStateAction& v) {
    if(v == LolGameflowPatcherProductStateAction::CheckingForUpdates_e) {
      j = "CheckingForUpdates";
      return;
    }
    if(v == LolGameflowPatcherProductStateAction::Idle_e) {
      j = "Idle";
      return;
    }
    if(v == LolGameflowPatcherProductStateAction::Patching_e) {
      j = "Patching";
      return;
    }
    if(v == LolGameflowPatcherProductStateAction::Repairing_e) {
      j = "Repairing";
      return;
    }
  }
  inline void from_json(const json& j, LolGameflowPatcherProductStateAction& v) {
    if(j.get<std::string>() == "CheckingForUpdates") {
      v = LolGameflowPatcherProductStateAction::CheckingForUpdates_e;
      return;
    } 
    if(j.get<std::string>() == "Idle") {
      v = LolGameflowPatcherProductStateAction::Idle_e;
      return;
    } 
    if(j.get<std::string>() == "Patching") {
      v = LolGameflowPatcherProductStateAction::Patching_e;
      return;
    } 
    if(j.get<std::string>() == "Repairing") {
      v = LolGameflowPatcherProductStateAction::Repairing_e;
      return;
    } 
  }
}