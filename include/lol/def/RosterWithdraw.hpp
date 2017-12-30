#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RosterWithdraw { 
    int64_t voteTimeoutMs;
    int64_t lockoutTimeMs;
    std::vector<int64_t> declineWithdrawMembers;
    int64_t initVoteTime;
    uint64_t initVoteMember;
    int64_t gameStartBufferMs;
    std::vector<int64_t> voteWithdrawMembers; 
  };
  inline void to_json(json& j, const RosterWithdraw& v) {
    j["voteTimeoutMs"] = v.voteTimeoutMs; 
    j["lockoutTimeMs"] = v.lockoutTimeMs; 
    j["declineWithdrawMembers"] = v.declineWithdrawMembers; 
    j["initVoteTime"] = v.initVoteTime; 
    j["initVoteMember"] = v.initVoteMember; 
    j["gameStartBufferMs"] = v.gameStartBufferMs; 
    j["voteWithdrawMembers"] = v.voteWithdrawMembers; 
  }
  inline void from_json(const json& j, RosterWithdraw& v) {
    v.voteTimeoutMs = j.at("voteTimeoutMs").get<int64_t>(); 
    v.lockoutTimeMs = j.at("lockoutTimeMs").get<int64_t>(); 
    v.declineWithdrawMembers = j.at("declineWithdrawMembers").get<std::vector<int64_t>>(); 
    v.initVoteTime = j.at("initVoteTime").get<int64_t>(); 
    v.initVoteMember = j.at("initVoteMember").get<uint64_t>(); 
    v.gameStartBufferMs = j.at("gameStartBufferMs").get<int64_t>(); 
    v.voteWithdrawMembers = j.at("voteWithdrawMembers").get<std::vector<int64_t>>(); 
  }
}