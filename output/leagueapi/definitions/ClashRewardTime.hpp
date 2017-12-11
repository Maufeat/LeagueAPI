#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ClashRewardTime { /**/ 
    EOB_e = 2, /**/ 
    EOG_e = 1, /**/ 
    EOT_e = 3, /**/ 
    NONE_e = 0, /**/ 
  };
  static void to_json(json& j, const ClashRewardTime& v) {
    switch(v) { 
    case ClashRewardTime::EOB_e:
      j = "EOB";
    break;
    case ClashRewardTime::EOG_e:
      j = "EOG";
    break;
    case ClashRewardTime::EOT_e:
      j = "EOT";
    break;
    case ClashRewardTime::NONE_e:
      j = "NONE";
    break;
    };
  }
  static void from_json(const json& j, ClashRewardTime& v) {
    auto s = j.get<std::string>(); 
    if(s == "EOB") {
      v = ClashRewardTime::EOB_e;
      return;
    } 
    if(s == "EOG") {
      v = ClashRewardTime::EOG_e;
      return;
    } 
    if(s == "EOT") {
      v = ClashRewardTime::EOT_e;
      return;
    } 
    if(s == "NONE") {
      v = ClashRewardTime::NONE_e;
      return;
    } 
  }
} 