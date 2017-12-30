#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace lol {
  struct LolLeaguesLeagueStanding { 
    std::string name;
    std::string inactivityStatus;
    std::string id;
    int64_t apexDaysUntilDecay;
    uint64_t position;
    uint64_t losses;
    std::vector<LolLeaguesLeagueEmblem> emblems;
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    int64_t positionDelta;
    uint64_t previousPosition;
    bool pendingPromotion;
    bool pendingDemotion;
    bool inactive;
    int64_t points;
    uint64_t wins; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueStanding& v) {
    j["name"] = v.name; 
    j["inactivityStatus"] = v.inactivityStatus; 
    j["id"] = v.id; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["position"] = v.position; 
    j["losses"] = v.losses; 
    j["emblems"] = v.emblems; 
    j["miniseriesResults"] = v.miniseriesResults; 
    j["positionDelta"] = v.positionDelta; 
    j["previousPosition"] = v.previousPosition; 
    j["pendingPromotion"] = v.pendingPromotion; 
    j["pendingDemotion"] = v.pendingDemotion; 
    j["inactive"] = v.inactive; 
    j["points"] = v.points; 
    j["wins"] = v.wins; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueStanding& v) {
    v.name = j.at("name").get<std::string>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
    v.position = j.at("position").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
    v.positionDelta = j.at("positionDelta").get<int64_t>(); 
    v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
    v.pendingPromotion = j.at("pendingPromotion").get<bool>(); 
    v.pendingDemotion = j.at("pendingDemotion").get<bool>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.points = j.at("points").get<int64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
  }
}