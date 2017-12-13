#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolReplaysMetadataState {  
    checking_e = 0,
    download_e = 3,
    downloading_e = 4,
    error_e = 10,
    found_e = 1,
    incompatible_e = 5,
    lost_e = 8,
    missingOrExpired_e = 6,
    retryDownload_e = 7,
    unsupported_e = 9,
    watch_e = 2,
  };
  void to_json(json& j, const LolReplaysMetadataState& v) {
    if(v == LolReplaysMetadataState::checking_e) {
      j = "checking";
      return;
    }
    if(v == LolReplaysMetadataState::download_e) {
      j = "download";
      return;
    }
    if(v == LolReplaysMetadataState::downloading_e) {
      j = "downloading";
      return;
    }
    if(v == LolReplaysMetadataState::error_e) {
      j = "error";
      return;
    }
    if(v == LolReplaysMetadataState::found_e) {
      j = "found";
      return;
    }
    if(v == LolReplaysMetadataState::incompatible_e) {
      j = "incompatible";
      return;
    }
    if(v == LolReplaysMetadataState::lost_e) {
      j = "lost";
      return;
    }
    if(v == LolReplaysMetadataState::missingOrExpired_e) {
      j = "missingOrExpired";
      return;
    }
    if(v == LolReplaysMetadataState::retryDownload_e) {
      j = "retryDownload";
      return;
    }
    if(v == LolReplaysMetadataState::unsupported_e) {
      j = "unsupported";
      return;
    }
    if(v == LolReplaysMetadataState::watch_e) {
      j = "watch";
      return;
    }
  }
  void from_json(const json& j, LolReplaysMetadataState& v) {
    if(j.get<std::string>() == "checking") {
      v = LolReplaysMetadataState::checking_e;
      return;
    } 
    if(j.get<std::string>() == "download") {
      v = LolReplaysMetadataState::download_e;
      return;
    } 
    if(j.get<std::string>() == "downloading") {
      v = LolReplaysMetadataState::downloading_e;
      return;
    } 
    if(j.get<std::string>() == "error") {
      v = LolReplaysMetadataState::error_e;
      return;
    } 
    if(j.get<std::string>() == "found") {
      v = LolReplaysMetadataState::found_e;
      return;
    } 
    if(j.get<std::string>() == "incompatible") {
      v = LolReplaysMetadataState::incompatible_e;
      return;
    } 
    if(j.get<std::string>() == "lost") {
      v = LolReplaysMetadataState::lost_e;
      return;
    } 
    if(j.get<std::string>() == "missingOrExpired") {
      v = LolReplaysMetadataState::missingOrExpired_e;
      return;
    } 
    if(j.get<std::string>() == "retryDownload") {
      v = LolReplaysMetadataState::retryDownload_e;
      return;
    } 
    if(j.get<std::string>() == "unsupported") {
      v = LolReplaysMetadataState::unsupported_e;
      return;
    } 
    if(j.get<std::string>() == "watch") {
      v = LolReplaysMetadataState::watch_e;
      return;
    } 
  }
}