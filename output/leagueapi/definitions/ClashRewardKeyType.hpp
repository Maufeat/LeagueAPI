#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ClashRewardKeyType { /**/ 
    CUP_e = 1, /**/ 
    LOWEST_POSITION_e = 3, /**/ 
    SEASON_FLAG_COUNT_e = 7, /**/ 
    SEASON_VP_e = 6, /**/ 
    THEME_VP_e = 5, /**/ 
    TIER_e = 0, /**/ 
    TOKENS_e = 2, /**/ 
    WINS_e = 4, /**/ 
  };
  static void to_json(json& j, const ClashRewardKeyType& v) {
    switch(v) { 
    case ClashRewardKeyType::CUP_e:
      j = "CUP";
    break;
    case ClashRewardKeyType::LOWEST_POSITION_e:
      j = "LOWEST_POSITION";
    break;
    case ClashRewardKeyType::SEASON_FLAG_COUNT_e:
      j = "SEASON_FLAG_COUNT";
    break;
    case ClashRewardKeyType::SEASON_VP_e:
      j = "SEASON_VP";
    break;
    case ClashRewardKeyType::THEME_VP_e:
      j = "THEME_VP";
    break;
    case ClashRewardKeyType::TIER_e:
      j = "TIER";
    break;
    case ClashRewardKeyType::TOKENS_e:
      j = "TOKENS";
    break;
    case ClashRewardKeyType::WINS_e:
      j = "WINS";
    break;
    };
  }
  static void from_json(const json& j, ClashRewardKeyType& v) {
    auto s = j.get<std::string>(); 
    if(s == "CUP") {
      v = ClashRewardKeyType::CUP_e;
      return;
    } 
    if(s == "LOWEST_POSITION") {
      v = ClashRewardKeyType::LOWEST_POSITION_e;
      return;
    } 
    if(s == "SEASON_FLAG_COUNT") {
      v = ClashRewardKeyType::SEASON_FLAG_COUNT_e;
      return;
    } 
    if(s == "SEASON_VP") {
      v = ClashRewardKeyType::SEASON_VP_e;
      return;
    } 
    if(s == "THEME_VP") {
      v = ClashRewardKeyType::THEME_VP_e;
      return;
    } 
    if(s == "TIER") {
      v = ClashRewardKeyType::TIER_e;
      return;
    } 
    if(s == "TOKENS") {
      v = ClashRewardKeyType::TOKENS_e;
      return;
    } 
    if(s == "WINS") {
      v = ClashRewardKeyType::WINS_e;
      return;
    } 
  }
} 