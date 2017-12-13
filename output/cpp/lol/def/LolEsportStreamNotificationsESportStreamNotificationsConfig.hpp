#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig { 
    std::string notificationsStreamURL;
    bool notificationsEnabled;
    int64_t beappFailureLongPollMinutes;
    std::string notificationsServiceEndpoint;
    std::string notificationsServiceEndpointV2;
    bool useServiceEndpointV2;
    int64_t notificationsShortPollMinutes;
    std::string notificationsAssetMagickURL;
    int64_t notificationsLongPollMinutes;
    std::string notificationsStreamGroupSlug; 
  };
  void to_json(json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
  j["notificationsStreamURL"] = v.notificationsStreamURL; 
  j["notificationsEnabled"] = v.notificationsEnabled; 
  j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes; 
  j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint; 
  j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2; 
  j["useServiceEndpointV2"] = v.useServiceEndpointV2; 
  j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes; 
  j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL; 
  j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes; 
  j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug; 
  }
  void from_json(const json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
  v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>(); 
  v.notificationsEnabled = j.at("notificationsEnabled").get<bool>(); 
  v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>(); 
  v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>(); 
  v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>(); 
  v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>(); 
  v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>(); 
  v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>(); 
  v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>(); 
  v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>(); 
  }
}