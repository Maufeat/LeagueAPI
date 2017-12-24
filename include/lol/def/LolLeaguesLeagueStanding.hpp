#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueEmblem.hpp"
#include "LolLeaguesMiniseries.hpp"
namespace lol {
  struct LolLeaguesLeagueStanding { 
    int64_t positionDelta;
    std::string name;
    std::string inactivityStatus;
    uint64_t position;
    int64_t apexDaysUntilDecay;
    bool pendingDemotion;
    bool pendingPromotion;
    int64_t points;
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    std::string id;
    uint64_t previousPosition;
    std::vector<LolLeaguesLeagueEmblem> emblems;
    uint64_t losses;
    uint64_t wins;
    bool inactive; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueStanding& v) {
    j["positionDelta"] = v.positionDelta; 
    j["name"] = v.name; 
    j["inactivityStatus"] = v.inactivityStatus; 
    j["position"] = v.position; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["pendingDemotion"] = v.pendingDemotion; 
    j["pendingPromotion"] = v.pendingPromotion; 
    j["points"] = v.points; 
    j["miniseriesResults"] = v.miniseriesResults; 
    j["id"] = v.id; 
    j["previousPosition"] = v.previousPosition; 
    j["emblems"] = v.emblems; 
    j["losses"] = v.losses; 
    j["wins"] = v.wins; 
    j["inactive"] = v.inactive; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueStanding& v) {
    v.positionDelta = j.at("positionDelta").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.position = j.at("position").get<uint64_t>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
    v.pendingDemotion = j.at("pendingDemotion").get<bool>(); 
    v.pendingPromotion = j.at("pendingPromotion").get<bool>(); 
    v.points = j.at("points").get<int64_t>(); 
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.inactive = j.at("inactive").get<bool>(); 
  }
}