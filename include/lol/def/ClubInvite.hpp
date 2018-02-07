#pragma once
#include "../base_def.hpp" 
#include "ClubInviteStatus.hpp"
namespace lol {
  struct ClubInvite { 
    std::string clubKey;
    std::string clubName;
    ClubInviteStatus status;
    uint64_t inviterAccountId;
    uint64_t inviterSummonerId;
    std::string inviterSummonerName;
    uint64_t inviteeAccountId;
    uint64_t inviteeSummonerId; 
  };
  inline void to_json(json& j, const ClubInvite& v) {
    j["clubKey"] = v.clubKey; 
    j["clubName"] = v.clubName; 
    j["status"] = v.status; 
    j["inviterAccountId"] = v.inviterAccountId; 
    j["inviterSummonerId"] = v.inviterSummonerId; 
    j["inviterSummonerName"] = v.inviterSummonerName; 
    j["inviteeAccountId"] = v.inviteeAccountId; 
    j["inviteeSummonerId"] = v.inviteeSummonerId; 
  }
  inline void from_json(const json& j, ClubInvite& v) {
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
    v.status = j.at("status").get<ClubInviteStatus>(); 
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>(); 
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>(); 
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
  }
}