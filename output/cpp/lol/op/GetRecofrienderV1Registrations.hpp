#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderLinkResource.hpp>
namespace lol {
  Result<std::vector<RecofrienderLinkResource>> GetRecofrienderV1Registrations(const LeagueClient& _client, const std::optional<std::string>& cb = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/recofriender/v1/registrations?" + SimpleWeb::QueryString::create(Args2Headers({ { "cb", to_string(cb) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}