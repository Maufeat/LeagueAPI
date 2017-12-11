#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LcdsRemovalReason { /**/ 
    DESTROYED_e = 1, /**/ 
    KICKED_e = 0, /**/ 
    PROGRESSED_e = 2, /**/ 
  };
  static void to_json(json& j, const LcdsRemovalReason& v) {
    switch(v) { 
    case LcdsRemovalReason::DESTROYED_e:
      j = "DESTROYED";
    break;
    case LcdsRemovalReason::KICKED_e:
      j = "KICKED";
    break;
    case LcdsRemovalReason::PROGRESSED_e:
      j = "PROGRESSED";
    break;
    };
  }
  static void from_json(const json& j, LcdsRemovalReason& v) {
    auto s = j.get<std::string>(); 
    if(s == "DESTROYED") {
      v = LcdsRemovalReason::DESTROYED_e;
      return;
    } 
    if(s == "KICKED") {
      v = LcdsRemovalReason::KICKED_e;
      return;
    } 
    if(s == "PROGRESSED") {
      v = LcdsRemovalReason::PROGRESSED_e;
      return;
    } 
  }
} 