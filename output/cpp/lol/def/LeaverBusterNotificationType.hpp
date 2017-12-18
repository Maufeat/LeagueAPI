#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LeaverBusterNotificationType {  
    Invalid_e = 0,
    PunishedGamesRemaining_e = 3,
    PunishmentIncurred_e = 2,
    Reforming_e = 4,
    TaintedWarning_e = 1,
  };
  inline void to_json(json& j, const LeaverBusterNotificationType& v) {
    if(v == LeaverBusterNotificationType::Invalid_e) {
      j = "Invalid";
      return;
    }
    if(v == LeaverBusterNotificationType::PunishedGamesRemaining_e) {
      j = "PunishedGamesRemaining";
      return;
    }
    if(v == LeaverBusterNotificationType::PunishmentIncurred_e) {
      j = "PunishmentIncurred";
      return;
    }
    if(v == LeaverBusterNotificationType::Reforming_e) {
      j = "Reforming";
      return;
    }
    if(v == LeaverBusterNotificationType::TaintedWarning_e) {
      j = "TaintedWarning";
      return;
    }
  }
  inline void from_json(const json& j, LeaverBusterNotificationType& v) {
    if(j.get<std::string>() == "Invalid") {
      v = LeaverBusterNotificationType::Invalid_e;
      return;
    } 
    if(j.get<std::string>() == "PunishedGamesRemaining") {
      v = LeaverBusterNotificationType::PunishedGamesRemaining_e;
      return;
    } 
    if(j.get<std::string>() == "PunishmentIncurred") {
      v = LeaverBusterNotificationType::PunishmentIncurred_e;
      return;
    } 
    if(j.get<std::string>() == "Reforming") {
      v = LeaverBusterNotificationType::Reforming_e;
      return;
    } 
    if(j.get<std::string>() == "TaintedWarning") {
      v = LeaverBusterNotificationType::TaintedWarning_e;
      return;
    } 
  }
}