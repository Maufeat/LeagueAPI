#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MembershipInviteDto { 
    uint64_t inviteeSummonerId;
    uint64_t inviterSummonerId;
    int32_t status;
    std::string clubName;
    uint64_t inviteeAccountId;
    std::string inviteePlatformId;
    uint64_t inviterAccountId;
    std::string clubKey;
    std::string inviterPlatformId; 
  };
  inline void to_json(json& j, const MembershipInviteDto& v) {
    j["inviteeSummonerId"] = v.inviteeSummonerId; 
    j["inviterSummonerId"] = v.inviterSummonerId; 
    j["status"] = v.status; 
    j["clubName"] = v.clubName; 
    j["inviteeAccountId"] = v.inviteeAccountId; 
    j["inviteePlatformId"] = v.inviteePlatformId; 
    j["inviterAccountId"] = v.inviterAccountId; 
    j["clubKey"] = v.clubKey; 
    j["inviterPlatformId"] = v.inviterPlatformId; 
  }
  inline void from_json(const json& j, MembershipInviteDto& v) {
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>(); 
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>(); 
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>(); 
  }
}