#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/Position.hpp>
#include <lol/def/LolClashBiddingData.hpp>
#include <lol/def/LolClashRosterMemberState.hpp>
namespace lol {
  struct LolClashRosterMember { 
    LolClashRosterMemberState state;
    uint64_t summonerId;
    uint64_t replacedSummonerId;
    bool isSubbedOut;
    LolClashBiddingData biddingData;
    Position position;
    bool isSubstitute; 
  };
  void to_json(json& j, const LolClashRosterMember& v) {
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["replacedSummonerId"] = v.replacedSummonerId; 
  j["isSubbedOut"] = v.isSubbedOut; 
  j["biddingData"] = v.biddingData; 
  j["position"] = v.position; 
  j["isSubstitute"] = v.isSubstitute; 
  }
  void from_json(const json& j, LolClashRosterMember& v) {
  v.state = j.at("state").get<LolClashRosterMemberState>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>(); 
  v.isSubbedOut = j.at("isSubbedOut").get<bool>(); 
  v.biddingData = j.at("biddingData").get<LolClashBiddingData>(); 
  v.position = j.at("position").get<Position>(); 
  v.isSubstitute = j.at("isSubstitute").get<bool>(); 
  }
}