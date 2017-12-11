#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ClashRewardType { /**/ 
    FLAG_e = 1, /**/ 
    FRAME_e = 2, /**/ 
    LOGO_e = 3, /**/ 
    LOOT_e = 4, /**/ 
    TROPHY_e = 0, /**/ 
    VP_e = 5, /**/ 
  };
  static void to_json(json& j, const ClashRewardType& v) {
    switch(v) { 
    case ClashRewardType::FLAG_e:
      j = "FLAG";
    break;
    case ClashRewardType::FRAME_e:
      j = "FRAME";
    break;
    case ClashRewardType::LOGO_e:
      j = "LOGO";
    break;
    case ClashRewardType::LOOT_e:
      j = "LOOT";
    break;
    case ClashRewardType::TROPHY_e:
      j = "TROPHY";
    break;
    case ClashRewardType::VP_e:
      j = "VP";
    break;
    };
  }
  static void from_json(const json& j, ClashRewardType& v) {
    auto s = j.get<std::string>(); 
    if(s == "FLAG") {
      v = ClashRewardType::FLAG_e;
      return;
    } 
    if(s == "FRAME") {
      v = ClashRewardType::FRAME_e;
      return;
    } 
    if(s == "LOGO") {
      v = ClashRewardType::LOGO_e;
      return;
    } 
    if(s == "LOOT") {
      v = ClashRewardType::LOOT_e;
      return;
    } 
    if(s == "TROPHY") {
      v = ClashRewardType::TROPHY_e;
      return;
    } 
    if(s == "VP") {
      v = ClashRewardType::VP_e;
      return;
    } 
  }
} 