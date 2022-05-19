create database BDContato
go
use BDContato
go
create table Contato (
	IdContato int primary key identity,
	Nome varchar(60) not null,
	Email varchar(100) not null
)
insert into Contato values ('Fulano', 'fulano@gmail.com') 
insert into Contato values ('Ciclano', 'ciclano@gmail.com')

select * from Contato