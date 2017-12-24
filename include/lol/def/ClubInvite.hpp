#pragma once
#include "../base_def.hpp" 
#include "ClubInviteStatus.hpp"
namespace lol {
  struct ClubInvite { 
    std::string clubName;
    uint64_t inviteeAccountId;
    std::string inviterSummonerName;
    std::string clubKey;
    uint64_t inviterAccountId;
    ClubInviteStatus status;
    uint64_t inviteeSummonerId;
    uint64_t inviterSummonerId; 
  };
  inline void to_json(json& j, const ClubInvite& v) {
    j["clubName"] = v.clubName; 
    j["inviteeAccountId"] = v.inviteeAccountId; 
    j["inviterSummonerName"] = v.inviterSummonerName; 
    j["clubKey"] = v.clubKey; 
    j["inviterAccountId"] = v.inviterAccountId; 
    j["status"] = v.status; 
    j["inviteeSummonerId"] = v.inviteeSummonerId; 
    j["inviterSummonerId"] = v.inviterSummonerId; 
  }
  inline void from_json(const json& j, ClubInvite& v) {
    v.clubName = j.at("clubName").get<std::string>(); 
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>(); 
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
    v.status = j.at("status").get<ClubInviteStatus>(); 
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
  }
}