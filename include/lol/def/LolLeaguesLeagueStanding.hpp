#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace lol {
  struct LolLeaguesLeagueStanding { 
    std::string id;
    std::string name;
    uint64_t position;
    int64_t positionDelta;
    uint64_t previousPosition;
    std::vector<LolLeaguesLeagueEmblem> emblems;
    uint64_t wins;
    uint64_t losses;
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    int64_t points;
    bool inactive;
    bool pendingPromotion;
    bool pendingDemotion;
    std::string inactivityStatus;
    int64_t apexDaysUntilDecay; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueStanding& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["position"] = v.position; 
    j["positionDelta"] = v.positionDelta; 
    j["previousPosition"] = v.previousPosition; 
    j["emblems"] = v.emblems; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
    j["miniseriesResults"] = v.miniseriesResults; 
    j["points"] = v.points; 
    j["inactive"] = v.inactive; 
    j["pendingPromotion"] = v.pendingPromotion; 
    j["pendingDemotion"] = v.pendingDemotion; 
    j["inactivityStatus"] = v.inactivityStatus; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueStanding& v) {
    v.id = j.at("id").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.position = j.at("position").get<uint64_t>(); 
    v.positionDelta = j.at("positionDelta").get<int64_t>(); 
    v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
    v.points = j.at("points").get<int64_t>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.pendingPromotion = j.at("pendingPromotion").get<bool>(); 
    v.pendingDemotion = j.at("pendingDemotion").get<bool>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
  }
}