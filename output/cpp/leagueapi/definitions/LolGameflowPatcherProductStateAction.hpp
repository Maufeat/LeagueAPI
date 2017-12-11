#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameflowPatcherProductStateAction { /**/ 
    CheckingForUpdates_e = 1, /**/ 
    Idle_e = 0, /**/ 
    Patching_e = 2, /**/ 
    Repairing_e = 3, /**/ 
  };
  static void to_json(json& j, const LolGameflowPatcherProductStateAction& v) {
    switch(v) { 
    case LolGameflowPatcherProductStateAction::CheckingForUpdates_e:
      j = "CheckingForUpdates";
    break;
    case LolGameflowPatcherProductStateAction::Idle_e:
      j = "Idle";
    break;
    case LolGameflowPatcherProductStateAction::Patching_e:
      j = "Patching";
    break;
    case LolGameflowPatcherProductStateAction::Repairing_e:
      j = "Repairing";
    break;
    };
  }
  static void from_json(const json& j, LolGameflowPatcherProductStateAction& v) {
    auto s = j.get<std::string>(); 
    if(s == "CheckingForUpdates") {
      v = LolGameflowPatcherProductStateAction::CheckingForUpdates_e;
      return;
    } 
    if(s == "Idle") {
      v = LolGameflowPatcherProductStateAction::Idle_e;
      return;
    } 
    if(s == "Patching") {
      v = LolGameflowPatcherProductStateAction::Patching_e;
      return;
    } 
    if(s == "Repairing") {
      v = LolGameflowPatcherProductStateAction::Repairing_e;
      return;
    } 
  }
} 