#pragma once
#include "../base_def.hpp" 
#include "Position.hpp"
#include "LolClashRosterMemberState.hpp"
#include "LolClashBiddingData.hpp"
namespace lol {
  struct LolClashRosterMember { 
    uint64_t summonerId;
    bool isSubbedOut;
    LolClashBiddingData biddingData;
    Position position;
    LolClashRosterMemberState state;
    uint64_t replacedSummonerId;
    bool isSubstitute; 
  };
  inline void to_json(json& j, const LolClashRosterMember& v) {
    j["summonerId"] = v.summonerId; 
    j["isSubbedOut"] = v.isSubbedOut; 
    j["biddingData"] = v.biddingData; 
    j["position"] = v.position; 
    j["state"] = v.state; 
    j["replacedSummonerId"] = v.replacedSummonerId; 
    j["isSubstitute"] = v.isSubstitute; 
  }
  inline void from_json(const json& j, LolClashRosterMember& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.isSubbedOut = j.at("isSubbedOut").get<bool>(); 
    v.biddingData = j.at("biddingData").get<LolClashBiddingData>(); 
    v.position = j.at("position").get<Position>(); 
    v.state = j.at("state").get<LolClashRosterMemberState>(); 
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>(); 
    v.isSubstitute = j.at("isSubstitute").get<bool>(); 
  }
}