#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig { 
    int64_t notificationsLongPollMinutes;
    std::string notificationsServiceEndpointV2;
    int64_t notificationsShortPollMinutes;
    std::string notificationsStreamGroupSlug;
    int64_t beappFailureLongPollMinutes;
    bool notificationsEnabled;
    std::string notificationsServiceEndpoint;
    bool useServiceEndpointV2;
    std::string notificationsStreamURL;
    std::string notificationsAssetMagickURL; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
    j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes; 
    j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2; 
    j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes; 
    j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug; 
    j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes; 
    j["notificationsEnabled"] = v.notificationsEnabled; 
    j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint; 
    j["useServiceEndpointV2"] = v.useServiceEndpointV2; 
    j["notificationsStreamURL"] = v.notificationsStreamURL; 
    j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>(); 
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>(); 
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>(); 
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>(); 
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>(); 
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool>(); 
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>(); 
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>(); 
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>(); 
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>(); 
  }
}