#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RosterWithdraw { 
    int64_t initVoteTime;
    std::vector<int64_t> declineWithdrawMembers;
    int64_t voteTimeoutMs;
    int64_t gameStartBufferMs;
    uint64_t initVoteMember;
    std::vector<int64_t> voteWithdrawMembers;
    int64_t lockoutTimeMs; 
  };
  inline void to_json(json& j, const RosterWithdraw& v) {
    j["initVoteTime"] = v.initVoteTime; 
    j["declineWithdrawMembers"] = v.declineWithdrawMembers; 
    j["voteTimeoutMs"] = v.voteTimeoutMs; 
    j["gameStartBufferMs"] = v.gameStartBufferMs; 
    j["initVoteMember"] = v.initVoteMember; 
    j["voteWithdrawMembers"] = v.voteWithdrawMembers; 
    j["lockoutTimeMs"] = v.lockoutTimeMs; 
  }
  inline void from_json(const json& j, RosterWithdraw& v) {
    v.initVoteTime = j.at("initVoteTime").get<int64_t>(); 
    v.declineWithdrawMembers = j.at("declineWithdrawMembers").get<std::vector<int64_t>>(); 
    v.voteTimeoutMs = j.at("voteTimeoutMs").get<int64_t>(); 
    v.gameStartBufferMs = j.at("gameStartBufferMs").get<int64_t>(); 
    v.initVoteMember = j.at("initVoteMember").get<uint64_t>(); 
    v.voteWithdrawMembers = j.at("voteWithdrawMembers").get<std::vector<int64_t>>(); 
    v.lockoutTimeMs = j.at("lockoutTimeMs").get<int64_t>(); 
  }
}