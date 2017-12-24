#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig { 
    std::string notificationsServiceEndpointV2;
    std::string notificationsStreamGroupSlug;
    std::string notificationsAssetMagickURL;
    bool useServiceEndpointV2;
    int64_t notificationsLongPollMinutes;
    std::string notificationsStreamURL;
    bool notificationsEnabled;
    int64_t beappFailureLongPollMinutes;
    std::string notificationsServiceEndpoint;
    int64_t notificationsShortPollMinutes; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
    j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2; 
    j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug; 
    j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL; 
    j["useServiceEndpointV2"] = v.useServiceEndpointV2; 
    j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes; 
    j["notificationsStreamURL"] = v.notificationsStreamURL; 
    j["notificationsEnabled"] = v.notificationsEnabled; 
    j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes; 
    j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint; 
    j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>(); 
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>(); 
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>(); 
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>(); 
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>(); 
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>(); 
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool>(); 
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>(); 
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>(); 
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>(); 
  }
}