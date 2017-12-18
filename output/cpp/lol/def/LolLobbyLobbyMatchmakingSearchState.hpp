#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyLobbyMatchmakingSearchState {  
    AbandonedLowPriorityQueue_e = 1,
    Canceled_e = 2,
    Error_e = 5,
    Found_e = 4,
    Invalid_e = 0,
    Searching_e = 3,
    ServiceError_e = 6,
    ServiceShutdown_e = 7,
  };
  inline void to_json(json& j, const LolLobbyLobbyMatchmakingSearchState& v) {
    if(v == LolLobbyLobbyMatchmakingSearchState::AbandonedLowPriorityQueue_e) {
      j = "AbandonedLowPriorityQueue";
      return;
    }
    if(v == LolLobbyLobbyMatchmakingSearchState::Canceled_e) {
      j = "Canceled";
      return;
    }
    if(v == LolLobbyLobbyMatchmakingSearchState::Error_e) {
      j = "Error";
      return;
    }
    if(v == LolLobbyLobbyMatchmakingSearchState::Found_e) {
      j = "Found";
      return;
    }
    if(v == LolLobbyLobbyMatchmakingSearchState::Invalid_e) {
      j = "Invalid";
      return;
    }
    if(v == LolLobbyLobbyMatchmakingSearchState::Searching_e) {
      j = "Searching";
      return;
    }
    if(v == LolLobbyLobbyMatchmakingSearchState::ServiceError_e) {
      j = "ServiceError";
      return;
    }
    if(v == LolLobbyLobbyMatchmakingSearchState::ServiceShutdown_e) {
      j = "ServiceShutdown";
      return;
    }
  }
  inline void from_json(const json& j, LolLobbyLobbyMatchmakingSearchState& v) {
    if(j.get<std::string>() == "AbandonedLowPriorityQueue") {
      v = LolLobbyLobbyMatchmakingSearchState::AbandonedLowPriorityQueue_e;
      return;
    } 
    if(j.get<std::string>() == "Canceled") {
      v = LolLobbyLobbyMatchmakingSearchState::Canceled_e;
      return;
    } 
    if(j.get<std::string>() == "Error") {
      v = LolLobbyLobbyMatchmakingSearchState::Error_e;
      return;
    } 
    if(j.get<std::string>() == "Found") {
      v = LolLobbyLobbyMatchmakingSearchState::Found_e;
      return;
    } 
    if(j.get<std::string>() == "Invalid") {
      v = LolLobbyLobbyMatchmakingSearchState::Invalid_e;
      return;
    } 
    if(j.get<std::string>() == "Searching") {
      v = LolLobbyLobbyMatchmakingSearchState::Searching_e;
      return;
    } 
    if(j.get<std::string>() == "ServiceError") {
      v = LolLobbyLobbyMatchmakingSearchState::ServiceError_e;
      return;
    } 
    if(j.get<std::string>() == "ServiceShutdown") {
      v = LolLobbyLobbyMatchmakingSearchState::ServiceShutdown_e;
      return;
    } 
  }
}