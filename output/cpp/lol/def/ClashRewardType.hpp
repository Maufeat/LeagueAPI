#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct ClashRewardType {  
    FLAG_e = 1,
    FRAME_e = 2,
    LOGO_e = 3,
    LOOT_e = 4,
    TROPHY_e = 0,
    VP_e = 5,
  };
  void to_json(json& j, const ClashRewardType& v) {
  if(v == ClashRewardType::FLAG_e) {
    j = "FLAG";
    return;
  }
  if(v == ClashRewardType::FRAME_e) {
    j = "FRAME";
    return;
  }
  if(v == ClashRewardType::LOGO_e) {
    j = "LOGO";
    return;
  }
  if(v == ClashRewardType::LOOT_e) {
    j = "LOOT";
    return;
  }
  if(v == ClashRewardType::TROPHY_e) {
    j = "TROPHY";
    return;
  }
  if(v == ClashRewardType::VP_e) {
    j = "VP";
    return;
  }
  }
  void from_json(const json& j, ClashRewardType& v) {
  if(j.get<std::string>() == "FLAG") {
    v = ClashRewardType::FLAG_e;
    return;
  } 
  if(j.get<std::string>() == "FRAME") {
    v = ClashRewardType::FRAME_e;
    return;
  } 
  if(j.get<std::string>() == "LOGO") {
    v = ClashRewardType::LOGO_e;
    return;
  } 
  if(j.get<std::string>() == "LOOT") {
    v = ClashRewardType::LOOT_e;
    return;
  } 
  if(j.get<std::string>() == "TROPHY") {
    v = ClashRewardType::TROPHY_e;
    return;
  } 
  if(j.get<std::string>() == "VP") {
    v = ClashRewardType::VP_e;
    return;
  } 
  }
}