#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LcdsRemovalReason {  
    DESTROYED_e = 1,
    KICKED_e = 0,
    PROGRESSED_e = 2,
  };
  void to_json(json& j, const LcdsRemovalReason& v) {
    if(v == LcdsRemovalReason::DESTROYED_e) {
      j = "DESTROYED";
      return;
    }
    if(v == LcdsRemovalReason::KICKED_e) {
      j = "KICKED";
      return;
    }
    if(v == LcdsRemovalReason::PROGRESSED_e) {
      j = "PROGRESSED";
      return;
    }
  }
  void from_json(const json& j, LcdsRemovalReason& v) {
    if(j.get<std::string>() == "DESTROYED") {
      v = LcdsRemovalReason::DESTROYED_e;
      return;
    } 
    if(j.get<std::string>() == "KICKED") {
      v = LcdsRemovalReason::KICKED_e;
      return;
    } 
    if(j.get<std::string>() == "PROGRESSED") {
      v = LcdsRemovalReason::PROGRESSED_e;
      return;
    } 
  }
}