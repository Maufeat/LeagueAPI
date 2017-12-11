#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LeaverBusterNotificationType { /**/ 
    Invalid_e = 0, /**/ 
    PunishedGamesRemaining_e = 3, /**/ 
    PunishmentIncurred_e = 2, /**/ 
    Reforming_e = 4, /**/ 
    TaintedWarning_e = 1, /**/ 
  };
  static void to_json(json& j, const LeaverBusterNotificationType& v) {
    switch(v) { 
    case LeaverBusterNotificationType::Invalid_e:
      j = "Invalid";
    break;
    case LeaverBusterNotificationType::PunishedGamesRemaining_e:
      j = "PunishedGamesRemaining";
    break;
    case LeaverBusterNotificationType::PunishmentIncurred_e:
      j = "PunishmentIncurred";
    break;
    case LeaverBusterNotificationType::Reforming_e:
      j = "Reforming";
    break;
    case LeaverBusterNotificationType::TaintedWarning_e:
      j = "TaintedWarning";
    break;
    };
  }
  static void from_json(const json& j, LeaverBusterNotificationType& v) {
    auto s = j.get<std::string>(); 
    if(s == "Invalid") {
      v = LeaverBusterNotificationType::Invalid_e;
      return;
    } 
    if(s == "PunishedGamesRemaining") {
      v = LeaverBusterNotificationType::PunishedGamesRemaining_e;
      return;
    } 
    if(s == "PunishmentIncurred") {
      v = LeaverBusterNotificationType::PunishmentIncurred_e;
      return;
    } 
    if(s == "Reforming") {
      v = LeaverBusterNotificationType::Reforming_e;
      return;
    } 
    if(s == "TaintedWarning") {
      v = LeaverBusterNotificationType::TaintedWarning_e;
      return;
    } 
  }
} 