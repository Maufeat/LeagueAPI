#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct ClashRewardKeyType {  
    CUP_e = 1,
    LOWEST_POSITION_e = 3,
    SEASON_FLAG_COUNT_e = 7,
    SEASON_VP_e = 6,
    THEME_VP_e = 5,
    TIER_e = 0,
    TOKENS_e = 2,
    WINS_e = 4,
  };
  void to_json(json& j, const ClashRewardKeyType& v) {
    if(v == ClashRewardKeyType::CUP_e) {
      j = "CUP";
      return;
    }
    if(v == ClashRewardKeyType::LOWEST_POSITION_e) {
      j = "LOWEST_POSITION";
      return;
    }
    if(v == ClashRewardKeyType::SEASON_FLAG_COUNT_e) {
      j = "SEASON_FLAG_COUNT";
      return;
    }
    if(v == ClashRewardKeyType::SEASON_VP_e) {
      j = "SEASON_VP";
      return;
    }
    if(v == ClashRewardKeyType::THEME_VP_e) {
      j = "THEME_VP";
      return;
    }
    if(v == ClashRewardKeyType::TIER_e) {
      j = "TIER";
      return;
    }
    if(v == ClashRewardKeyType::TOKENS_e) {
      j = "TOKENS";
      return;
    }
    if(v == ClashRewardKeyType::WINS_e) {
      j = "WINS";
      return;
    }
  }
  void from_json(const json& j, ClashRewardKeyType& v) {
    if(j.get<std::string>() == "CUP") {
      v = ClashRewardKeyType::CUP_e;
      return;
    } 
    if(j.get<std::string>() == "LOWEST_POSITION") {
      v = ClashRewardKeyType::LOWEST_POSITION_e;
      return;
    } 
    if(j.get<std::string>() == "SEASON_FLAG_COUNT") {
      v = ClashRewardKeyType::SEASON_FLAG_COUNT_e;
      return;
    } 
    if(j.get<std::string>() == "SEASON_VP") {
      v = ClashRewardKeyType::SEASON_VP_e;
      return;
    } 
    if(j.get<std::string>() == "THEME_VP") {
      v = ClashRewardKeyType::THEME_VP_e;
      return;
    } 
    if(j.get<std::string>() == "TIER") {
      v = ClashRewardKeyType::TIER_e;
      return;
    } 
    if(j.get<std::string>() == "TOKENS") {
      v = ClashRewardKeyType::TOKENS_e;
      return;
    } 
    if(j.get<std::string>() == "WINS") {
      v = ClashRewardKeyType::WINS_e;
      return;
    } 
  }
}