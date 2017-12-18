#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct ClashRewardTime {  
    EOB_e = 2,
    EOG_e = 1,
    EOT_e = 3,
    NONE_e = 0,
  };
  inline void to_json(json& j, const ClashRewardTime& v) {
    if(v == ClashRewardTime::EOB_e) {
      j = "EOB";
      return;
    }
    if(v == ClashRewardTime::EOG_e) {
      j = "EOG";
      return;
    }
    if(v == ClashRewardTime::EOT_e) {
      j = "EOT";
      return;
    }
    if(v == ClashRewardTime::NONE_e) {
      j = "NONE";
      return;
    }
  }
  inline void from_json(const json& j, ClashRewardTime& v) {
    if(j.get<std::string>() == "EOB") {
      v = ClashRewardTime::EOB_e;
      return;
    } 
    if(j.get<std::string>() == "EOG") {
      v = ClashRewardTime::EOG_e;
      return;
    } 
    if(j.get<std::string>() == "EOT") {
      v = ClashRewardTime::EOT_e;
      return;
    } 
    if(j.get<std::string>() == "NONE") {
      v = ClashRewardTime::NONE_e;
      return;
    } 
  }
}