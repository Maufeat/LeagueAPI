#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyTeamBuilderMatchmakingSearchState {  
    AbandonedLowPriorityQueue_e = 1,
    Canceled_e = 2,
    Error_e = 5,
    Found_e = 4,
    Invalid_e = 0,
    Searching_e = 3,
    ServiceError_e = 6,
    ServiceShutdown_e = 7,
  };
  void to_json(json& j, const LolLobbyTeamBuilderMatchmakingSearchState& v) {
  if(v == LolLobbyTeamBuilderMatchmakingSearchState::AbandonedLowPriorityQueue_e) {
    j = "AbandonedLowPriorityQueue";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingSearchState::Canceled_e) {
    j = "Canceled";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingSearchState::Error_e) {
    j = "Error";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingSearchState::Found_e) {
    j = "Found";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingSearchState::Invalid_e) {
    j = "Invalid";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingSearchState::Searching_e) {
    j = "Searching";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingSearchState::ServiceError_e) {
    j = "ServiceError";
    return;
  }
  if(v == LolLobbyTeamBuilderMatchmakingSearchState::ServiceShutdown_e) {
    j = "ServiceShutdown";
    return;
  }
  }
  void from_json(const json& j, LolLobbyTeamBuilderMatchmakingSearchState& v) {
  if(j.get<std::string>() == "AbandonedLowPriorityQueue") {
    v = LolLobbyTeamBuilderMatchmakingSearchState::AbandonedLowPriorityQueue_e;
    return;
  } 
  if(j.get<std::string>() == "Canceled") {
    v = LolLobbyTeamBuilderMatchmakingSearchState::Canceled_e;
    return;
  } 
  if(j.get<std::string>() == "Error") {
    v = LolLobbyTeamBuilderMatchmakingSearchState::Error_e;
    return;
  } 
  if(j.get<std::string>() == "Found") {
    v = LolLobbyTeamBuilderMatchmakingSearchState::Found_e;
    return;
  } 
  if(j.get<std::string>() == "Invalid") {
    v = LolLobbyTeamBuilderMatchmakingSearchState::Invalid_e;
    return;
  } 
  if(j.get<std::string>() == "Searching") {
    v = LolLobbyTeamBuilderMatchmakingSearchState::Searching_e;
    return;
  } 
  if(j.get<std::string>() == "ServiceError") {
    v = LolLobbyTeamBuilderMatchmakingSearchState::ServiceError_e;
    return;
  } 
  if(j.get<std::string>() == "ServiceShutdown") {
    v = LolLobbyTeamBuilderMatchmakingSearchState::ServiceShutdown_e;
    return;
  } 
  }
}