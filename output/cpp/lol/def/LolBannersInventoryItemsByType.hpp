#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolBannersTournamentFlagInventoryItem.hpp>
namespace lol {
  struct LolBannersInventoryItemsByType { 
    std::vector<LolBannersTournamentFlagInventoryItem> TOURNAMENT_FLAG; 
  };
  void to_json(json& j, const LolBannersInventoryItemsByType& v) {
  j["TOURNAMENT_FLAG"] = v.TOURNAMENT_FLAG; 
  }
  void from_json(const json& j, LolBannersInventoryItemsByType& v) {
  v.TOURNAMENT_FLAG = j.at("TOURNAMENT_FLAG").get<std::vector<LolBannersTournamentFlagInventoryItem>>(); 
  }
}