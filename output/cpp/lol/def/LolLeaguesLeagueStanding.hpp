#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLeagueEmblem.hpp>
#include <lol/def/LolLeaguesMiniseries.hpp>
namespace lol {
  struct LolLeaguesLeagueStanding { 
    std::string inactivityStatus;
    bool pendingPromotion;
    std::string name;
    int64_t apexDaysUntilDecay;
    bool pendingDemotion;
    int64_t positionDelta;
    uint64_t wins;
    std::vector<LolLeaguesLeagueEmblem> emblems;
    std::string id;
    uint64_t previousPosition;
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    uint64_t losses;
    bool inactive;
    int64_t points;
    uint64_t position; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueStanding& v) {
    j["inactivityStatus"] = v.inactivityStatus; 
    j["pendingPromotion"] = v.pendingPromotion; 
    j["name"] = v.name; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["pendingDemotion"] = v.pendingDemotion; 
    j["positionDelta"] = v.positionDelta; 
    j["wins"] = v.wins; 
    j["emblems"] = v.emblems; 
    j["id"] = v.id; 
    j["previousPosition"] = v.previousPosition; 
    j["miniseriesResults"] = v.miniseriesResults; 
    j["losses"] = v.losses; 
    j["inactive"] = v.inactive; 
    j["points"] = v.points; 
    j["position"] = v.position; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueStanding& v) {
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.pendingPromotion = j.at("pendingPromotion").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
    v.pendingDemotion = j.at("pendingDemotion").get<bool>(); 
    v.positionDelta = j.at("positionDelta").get<int64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.points = j.at("points").get<int64_t>(); 
    v.position = j.at("position").get<uint64_t>(); 
  }
}