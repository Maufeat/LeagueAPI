#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PatcherComponentStateAction { /**/ 
    CheckingForUpdates_e = 1, /**/ 
    Idle_e = 0, /**/ 
    Patching_e = 2, /**/ 
    Repairing_e = 3, /**/ 
  };
  static void to_json(json& j, const PatcherComponentStateAction& v) {
    switch(v) { 
    case PatcherComponentStateAction::CheckingForUpdates_e:
      j = "CheckingForUpdates";
    break;
    case PatcherComponentStateAction::Idle_e:
      j = "Idle";
    break;
    case PatcherComponentStateAction::Patching_e:
      j = "Patching";
    break;
    case PatcherComponentStateAction::Repairing_e:
      j = "Repairing";
    break;
    };
  }
  static void from_json(const json& j, PatcherComponentStateAction& v) {
    auto s = j.get<std::string>(); 
    if(s == "CheckingForUpdates") {
      v = PatcherComponentStateAction::CheckingForUpdates_e;
      return;
    } 
    if(s == "Idle") {
      v = PatcherComponentStateAction::Idle_e;
      return;
    } 
    if(s == "Patching") {
      v = PatcherComponentStateAction::Patching_e;
      return;
    } 
    if(s == "Repairing") {
      v = PatcherComponentStateAction::Repairing_e;
      return;
    } 
  }
} 