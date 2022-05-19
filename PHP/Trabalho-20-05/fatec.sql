-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 19-Maio-2022 às 12:53
-- Versão do servidor: 10.4.22-MariaDB
-- versão do PHP: 7.4.27

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `fatec`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `livros`
--

CREATE TABLE `livros` (
  `autor` varchar(20) DEFAULT NULL,
  `titulo` varchar(40) DEFAULT NULL,
  `area` varchar(16) DEFAULT NULL,
  `ano` smallint(6) DEFAULT NULL,
  `tombo` char(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Extraindo dados da tabela `livros`
--

INSERT INTO `livros` (`autor`, `titulo`, `area`, `ano`, `tombo`) VALUES
('Maria Margarida', 'PHP', 'Programacao', 2017, '1234567890'),
('Catarina Bertonha', 'MySQL', 'Programacao', 2016, '1234567891'),
('Maria Margarida', 'PHP', 'Programacao', 2017, '1234567892'),
('Catarina Bertonha', 'MySQL', 'Programacao', 2016, '1234567893');

-- --------------------------------------------------------

--
-- Estrutura da tabela `usuarios`
--

CREATE TABLE `usuarios` (
  `id` int(10) UNSIGNED NOT NULL,
  `nome` varchar(220) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `email` varchar(220) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `login` varchar(50) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `senha` varchar(50) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `nivel_acesso_id` int(11) DEFAULT NULL,
  `criado_em` datetime DEFAULT NULL,
  `modificado_em` datetime DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Extraindo dados da tabela `usuarios`
--

INSERT INTO `usuarios` (`id`, `nome`, `email`, `login`, `senha`, `nivel_acesso_id`, `criado_em`, `modificado_em`) VALUES
(1, 'josefa', 'admin@zmail.com', 'admin', '123', 1, '2018-05-23 00:00:00', NULL),
(2, 'Claudio', 'admin@zmail.com', 'anv', 'f@tek', 2, '2018-05-23 00:00:00', NULL),
(3, 'Aparecida', 'cidinha123@fatec.gov.br', 'Bib', 'b2', 3, '2022-05-19 12:51:22', '2022-05-19 12:51:22');

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `livros`
--
ALTER TABLE `livros`
  ADD KEY `autor` (`autor`),
  ADD KEY `titulo` (`titulo`(20)),
  ADD KEY `area` (`area`(4)),
  ADD KEY `ano` (`ano`);

--
-- Índices para tabela `usuarios`
--
ALTER TABLE `usuarios`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `usuarios`
--
ALTER TABLE `usuarios`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
